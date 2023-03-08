#!/usr/bin/python3
"""Defines a file-writing function."""


def write_file(filename="", text=""):
    """Write a string to a UTF8 text file.
    Args:
        filename (str, optional): name of the file to write. Defaults to "".
        text (str): The text to write to the file.
    Returns:
        [int]: The number of characters written.
    """
    with open(filename, "w", encoding="utf-8") as file:
        return file.write(text)
