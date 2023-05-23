# SumatraPDF-mod
----------------------------------------------------------------------------------------------------------------------------------------------
This mod has two main features
-----------------------------------------------------------------------------------------------------------------------------------------------
1) The size of box containing free text annotations will be automatically resized according to the size of the string.
2) Image objects can be pasted and their size is also adjustable.

Download the original source files of SumatraPDF and unzip to a folder
----------------------------------------------------------------------------------------------------------------------------------------------

Overwrite below files to the corresponding path
-----------------------------------------------------------------------------------------------------------------------------------------------
sumatrapdf-master\src\: Annotation.cpp, Annotation.h, Canvas.cpp, Commands.h, EditAnnotations.cpp, EngineMupdf.cpp, Menu.cpp, Menu.h, SumatraPDF.cpp

sumatrapdf-master\src\WinGui: WinGui.cpp

sumatrapdf-master\mupdf\source\pdf: pdf-annot.c, pdf-appearance.c, pdf-font-add.c, pdf-object.c

sumatrapdf-master\mupdf\include\mupdf\pdf:annot.h, object.h

Change Project Property setting
----------------------------------------------------------------------------------------------------------------------------------------------
Property pages → C/C++ → Code generation → Enable C++ exceptions → Yes(/Ehsc)

Compile and run in Visual stuido Community
-----------------------------------------------------------------------------------------------------------------------------------------------
The executable file: SumatraPDF.exe



