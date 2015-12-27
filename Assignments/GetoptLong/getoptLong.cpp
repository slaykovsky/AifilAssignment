//
// Created by Alexey Slaykovsky on 25/12/15.
//

#include <getoptLong.h>

vos &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


vos split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

options_t generate_options()
{
    options_t options;
    options["--integer"] = true;
    options["--string"] = false;
    options["--bool"] = true;
    return options;
}

std::string get_help_message(std::string file_name, options_t options)
{
    std::string message;

    std::string name;

    for (auto it = options.begin(); it != options.end(); ++it)
    {
        name = it->first;
        if (!it->second)
        {
            name = "[" + name + "]";
        }
        message.append(name);
        message.append(" ");
    }

    message = "Usage: " + file_name + " " + message;

    return message;
}

std::string get_value(std::string name, vos argv)
{
    for (auto it = argv.begin() + 1; it != argv.end(); ++it)
    {
        std::vector<std::string> temp = split(*it, '=');
        if (temp[0] == name)
        {
            return temp[1];
        }
    }
    return "";
}

std::string getopts_long(vos argv, options_t options)
{
    std::string result;
    std::string file_name = argv[0];

    if ((argv.size() == 1) || (std::find(argv.begin(), argv.end(), "--help") != argv.end()))
    {
        return get_help_message(file_name, options);
    }

    for (auto it = options.begin(); it != options.end(); ++it)
    {
        std::string value = get_value(it->first, argv);
        if (it->second)
        {
            if (value == "") {
                result.append(it->first);
                result.append(" is required!\n");
            }
            else {
                result.append(it->first);
                result.append(" = ");
                result.append(value);
                result.append("\n");
            }
        }
        else {
            result.append(it->first);
            result.append(" = ");
            result.append(value);
            result.append("\n");
        }
    }
    return result;
}