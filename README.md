# print-f
For some reason, while debugging in Visual Studio, you'll get the stack trace in one long line with newline or carriage returns as literal characters. For example:

```
"   at System.Windows.Forms.WebBrowserBase..ctor(String clsidString)\r\n   at System.Windows.Forms.WebBrowser..ctor()\r\n......
```

This small utility will print out the stack trace to the console in a more legible format.

```
"   at System.Windows.Forms.WebBrowserBase..ctor(String clsidString)
   at System.Windows.Forms.WebBrowser..ctor()
   ...
```

## Usage
In the `print.c` file, input the path to your file in the `main()` function.
```C
char *filename = "C:/path/to/file.txt";
```

Compile with something like 
```bash
cc print.c
```

Then run with
```
.\a.exe
```
or 
```
./a.exe
```
