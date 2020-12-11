void housesOfHogwarts(const char *path)
{
    ifstream file(path);
    if (file.is_open())
    {
        char ar[255];
        file.getline(ar, 255);
        while (!file.eof())
        {
            file.getline(ar, 255);
            cout << ar << endl;
        }
    }
}
