# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Caleb\Documents\Programming Projects\FileEditor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\FileEditor.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\FileEditor.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\FileEditor.dir\flags.make

CMakeFiles\FileEditor.dir\filedit.c.obj: CMakeFiles\FileEditor.dir\flags.make
CMakeFiles\FileEditor.dir\filedit.c.obj: ..\filedit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FileEditor.dir/filedit.c.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\FileEditor.dir\filedit.c.obj /FdCMakeFiles\FileEditor.dir\ /FS -c "C:\Users\Caleb\Documents\Programming Projects\FileEditor\filedit.c"
<<

CMakeFiles\FileEditor.dir\filedit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FileEditor.dir/filedit.c.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\FileEditor.dir\filedit.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Caleb\Documents\Programming Projects\FileEditor\filedit.c"
<<

CMakeFiles\FileEditor.dir\filedit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FileEditor.dir/filedit.c.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\FileEditor.dir\filedit.c.s /c "C:\Users\Caleb\Documents\Programming Projects\FileEditor\filedit.c"
<<

# Object files for target FileEditor
FileEditor_OBJECTS = \
"CMakeFiles\FileEditor.dir\filedit.c.obj"

# External object files for target FileEditor
FileEditor_EXTERNAL_OBJECTS =

FileEditor.exe: CMakeFiles\FileEditor.dir\filedit.c.obj
FileEditor.exe: CMakeFiles\FileEditor.dir\build.make
FileEditor.exe: CMakeFiles\FileEditor.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FileEditor.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\FileEditor.dir --manifests  -- C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\FileEditor.dir\objects1.rsp @<<
 /out:FileEditor.exe /implib:FileEditor.lib /pdb:"C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug\FileEditor.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\FileEditor.dir\build: FileEditor.exe

.PHONY : CMakeFiles\FileEditor.dir\build

CMakeFiles\FileEditor.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FileEditor.dir\cmake_clean.cmake
.PHONY : CMakeFiles\FileEditor.dir\clean

CMakeFiles\FileEditor.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Caleb\Documents\Programming Projects\FileEditor" "C:\Users\Caleb\Documents\Programming Projects\FileEditor" "C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug" "C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug" "C:\Users\Caleb\Documents\Programming Projects\FileEditor\cmake-build-debug\CMakeFiles\FileEditor.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\FileEditor.dir\depend

