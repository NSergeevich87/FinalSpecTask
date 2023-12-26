##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=C++_part
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :="C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask"
ProjectPath            :="C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part"
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/C++_part
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Professional
Date                   :=26/12/2023
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O0 -gdwarf-2 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Hamster.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pack_Animals.cpp$(ObjectSuffix) $(IntermediateDirectory)/Caballo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Animals.cpp$(ObjectSuffix) $(IntermediateDirectory)/Print_Menu.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cat.cpp$(ObjectSuffix) $(IntermediateDirectory)/Dog.cpp$(ObjectSuffix) $(IntermediateDirectory)/Donkey.cpp$(ObjectSuffix) $(IntermediateDirectory)/Camal.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/I_Print.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pat_Animals.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Hamster.cpp$(ObjectSuffix): Hamster.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Hamster.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Hamster.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Hamster.cpp$(PreprocessSuffix): Hamster.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Hamster.cpp$(PreprocessSuffix) Hamster.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Pack_Animals.cpp$(ObjectSuffix): Pack_Animals.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Pack_Animals.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pack_Animals.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pack_Animals.cpp$(PreprocessSuffix): Pack_Animals.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pack_Animals.cpp$(PreprocessSuffix) Pack_Animals.cpp

$(IntermediateDirectory)/Caballo.cpp$(ObjectSuffix): Caballo.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Caballo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Caballo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Caballo.cpp$(PreprocessSuffix): Caballo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Caballo.cpp$(PreprocessSuffix) Caballo.cpp

$(IntermediateDirectory)/Animals.cpp$(ObjectSuffix): Animals.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Animals.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Animals.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Animals.cpp$(PreprocessSuffix): Animals.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Animals.cpp$(PreprocessSuffix) Animals.cpp

$(IntermediateDirectory)/Print_Menu.cpp$(ObjectSuffix): Print_Menu.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Print_Menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Print_Menu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Print_Menu.cpp$(PreprocessSuffix): Print_Menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Print_Menu.cpp$(PreprocessSuffix) Print_Menu.cpp

$(IntermediateDirectory)/Cat.cpp$(ObjectSuffix): Cat.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Cat.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cat.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cat.cpp$(PreprocessSuffix): Cat.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cat.cpp$(PreprocessSuffix) Cat.cpp

$(IntermediateDirectory)/Dog.cpp$(ObjectSuffix): Dog.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Dog.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Dog.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Dog.cpp$(PreprocessSuffix): Dog.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Dog.cpp$(PreprocessSuffix) Dog.cpp

$(IntermediateDirectory)/Donkey.cpp$(ObjectSuffix): Donkey.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Donkey.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Donkey.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Donkey.cpp$(PreprocessSuffix): Donkey.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Donkey.cpp$(PreprocessSuffix) Donkey.cpp

$(IntermediateDirectory)/Camal.cpp$(ObjectSuffix): Camal.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Camal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Camal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Camal.cpp$(PreprocessSuffix): Camal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Camal.cpp$(PreprocessSuffix) Camal.cpp

$(IntermediateDirectory)/I_Print.cpp$(ObjectSuffix): I_Print.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/I_Print.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Print.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/I_Print.cpp$(PreprocessSuffix): I_Print.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/I_Print.cpp$(PreprocessSuffix) I_Print.cpp

$(IntermediateDirectory)/Pat_Animals.cpp$(ObjectSuffix): Pat_Animals.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Professional/Documents/C++ All Projects/FinalSpecTask/C++_part/Pat_Animals.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pat_Animals.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pat_Animals.cpp$(PreprocessSuffix): Pat_Animals.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pat_Animals.cpp$(PreprocessSuffix) Pat_Animals.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


