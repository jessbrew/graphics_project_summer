#include "svg.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
#include "key_util.h"

// Ricky
Svg::Svg(std::string filename, int canvas_height, int canvas_width)
    :filename{filename}, canvas_height{canvas_height}, canvas_width{canvas_width} {
    if (canvas_width < 1) {
        throw std::runtime_error("A positive width for the canvas is required.");
    } else if (canvas_height < 1) {
        throw std::runtime_error("A positive height for the canvas is required.");
    } else if (filename.empty()) {
        throw std::runtime_error("A filename is required.");
    }

    // add file header
    lines.push_back("<html>");
    lines.push_back("<body>");
    lines.push_back(
        "<svg " + key_pair("width", canvas_width) + key_pair("height", canvas_height) +
        "xmlns=\"http://www.w3.org/2000/svg\">");
}

// Ricky
void Svg::output() {
    lines.push_back("</svg>");
    lines.push_back("</body>");
    lines.push_back("</html>");
    std::string document_output;
    for (std::string line : lines) {
        document_output += line + "\n";
    }

    std::ofstream out{filename};
    if (!out) {
        throw std::runtime_error("Failed to create file " + filename);
    }

    out << document_output;
    std::cout << "SVG Saved!\n";
}

//Amos
void Svg::draw_ellipse(Point radius, Point center, Attributes a) {
    std::string ellipse{"<ellipse " + key_pair("cx", center.x) + key_pair("cy", center.y)
                         + key_pair("rx", radius.x) + key_pair("ry", radius.y)
                         + key_pair("stroke", a.stroke_color) + key_pair("stroke-width", a.stroke_width)
                         + key_pair("fill", a.fill_color) + "/>"};
    lines.push_back(ellipse);
}

//Amos
void Svg::draw_rectangle(int height, int width, Point start, Attributes a) {
    std::string rectangle{"<rect " + key_pair("width", width) + key_pair("height", height)
                                   + key_pair("x", start.x) + key_pair("y", start.y)
                                   + key_pair("stroke", a.stroke_color) + key_pair("stroke-width", a.stroke_width)
                                   + key_pair("fill", a.fill_color) + "/>"};
    lines.push_back(rectangle);
};

//Amos
void Svg::draw_line(Point start, Point end, Attributes a) {
    std::string line{"<line " + key_pair("x1", start.x) + key_pair("y1", start.y)
                              + key_pair("x2", end.x) + key_pair("y2", end.y)
                              + key_pair("stroke", a.stroke_color) + key_pair("stroke-width", a.stroke_width)
                              + key_pair("fill", a.fill_color) + "/>"};
    lines.push_back(line);
};

// Ricky
void Svg::draw_text(std::string text, Point corner, int font_size, std::string font_color) {
    std::string line{"<text " + key_pair("x", corner.x) + key_pair("y", corner.y)
    + key_pair("fill", font_color) + key_pair("font-size", font_size) + ">" + text + "</text>"};
    lines.push_back(line);
}