##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PrintPairs
ConfigurationName      :=Debug
WorkspacePath          :=/home/dizcza/CodeLiteProjects/TechMaker
ProjectPath            :=/home/dizcza/CodeLiteProjects/TechMaker/PrintPairs
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Danylo Ulianych
Date                   :=08/01/16
CodeLitePath           :=/home/dizcza/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PrintPairs.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)/usr/local/include/collectc/ 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)collectc 
ArLibs                 :=  "libcollectc.so" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib/ 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -std=c99 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/mytimer.c$(ObjectSuffix) $(IntermediateDirectory)/print_pairs_2pointers.c$(ObjectSuffix) $(IntermediateDirectory)/print_pairs_brute.c$(ObjectSuffix) $(IntermediateDirectory)/print_pairs_hash.c$(ObjectSuffix) $(IntermediateDirectory)/tests.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/mytimer.c$(ObjectSuffix): mytimer.c $(IntermediateDirectory)/mytimer.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/dizcza/CodeLiteProjects/TechMaker/PrintPairs/mytimer.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/mytimer.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/mytimer.c$(DependSuffix): mytimer.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/mytimer.c$(ObjectSuffix) -MF$(IntermediateDirectory)/mytimer.c$(DependSuffix) -MM mytimer.c

$(IntermediateDirectory)/mytimer.c$(PreprocessSuffix): mytimer.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/mytimer.c$(PreprocessSuffix)mytimer.c

$(IntermediateDirectory)/print_pairs_2pointers.c$(ObjectSuffix): print_pairs_2pointers.c $(IntermediateDirectory)/print_pairs_2pointers.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/dizcza/CodeLiteProjects/TechMaker/PrintPairs/print_pairs_2pointers.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/print_pairs_2pointers.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/print_pairs_2pointers.c$(DependSuffix): print_pairs_2pointers.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/print_pairs_2pointers.c$(ObjectSuffix) -MF$(IntermediateDirectory)/print_pairs_2pointers.c$(DependSuffix) -MM print_pairs_2pointers.c

$(IntermediateDirectory)/print_pairs_2pointers.c$(PreprocessSuffix): print_pairs_2pointers.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/print_pairs_2pointers.c$(PreprocessSuffix)print_pairs_2pointers.c

$(IntermediateDirectory)/print_pairs_brute.c$(ObjectSuffix): print_pairs_brute.c $(IntermediateDirectory)/print_pairs_brute.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/dizcza/CodeLiteProjects/TechMaker/PrintPairs/print_pairs_brute.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/print_pairs_brute.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/print_pairs_brute.c$(DependSuffix): print_pairs_brute.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/print_pairs_brute.c$(ObjectSuffix) -MF$(IntermediateDirectory)/print_pairs_brute.c$(DependSuffix) -MM print_pairs_brute.c

$(IntermediateDirectory)/print_pairs_brute.c$(PreprocessSuffix): print_pairs_brute.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/print_pairs_brute.c$(PreprocessSuffix)print_pairs_brute.c

$(IntermediateDirectory)/print_pairs_hash.c$(ObjectSuffix): print_pairs_hash.c $(IntermediateDirectory)/print_pairs_hash.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/dizcza/CodeLiteProjects/TechMaker/PrintPairs/print_pairs_hash.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/print_pairs_hash.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/print_pairs_hash.c$(DependSuffix): print_pairs_hash.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/print_pairs_hash.c$(ObjectSuffix) -MF$(IntermediateDirectory)/print_pairs_hash.c$(DependSuffix) -MM print_pairs_hash.c

$(IntermediateDirectory)/print_pairs_hash.c$(PreprocessSuffix): print_pairs_hash.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/print_pairs_hash.c$(PreprocessSuffix)print_pairs_hash.c

$(IntermediateDirectory)/tests.c$(ObjectSuffix): tests.c $(IntermediateDirectory)/tests.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/dizcza/CodeLiteProjects/TechMaker/PrintPairs/tests.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/tests.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/tests.c$(DependSuffix): tests.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/tests.c$(ObjectSuffix) -MF$(IntermediateDirectory)/tests.c$(DependSuffix) -MM tests.c

$(IntermediateDirectory)/tests.c$(PreprocessSuffix): tests.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/tests.c$(PreprocessSuffix)tests.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


