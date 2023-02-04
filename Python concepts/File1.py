print("File1 __name__ = %s" %__name__)
if __name__ == "__main__":
    print("File1 is executed directly")
else:
    print("File1 is being imported")
    