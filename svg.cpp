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

    // create used keys
    Key canvas_width_key(Svg::canvas_width);
    Key canvas_height_key(Svg::canvas_height);

    // add file header
    lines.push_back("<html>");
    lines.push_back("<body>");
    lines.push_back(
        "<svg width=" + canvas_width_key.get() + " height=" + canvas_height_key.get() +
        " xmlns=\"http://www.w3.org/2000/svg\">");
}

// Ricky
void Svg::output_svg_file() {
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