#!/usr/bin/python3
"""10. Class to JSON"""


def class_to_json(obj):
    """returns the dictionary description with simple
    data structure (list, dictionary, string, integer and boolean)
    for JSON serialization of an object
    Args:
        obj (object): is an instance of a Class
    Returns:
        dict: dictionaty
    """
    return obj.__dict__
