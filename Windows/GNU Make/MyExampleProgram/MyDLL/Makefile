TARGET           = MyDLL.dll

SRCDIR           = ./src
OBJDIR           = ./obj
BINDIR           = ./bin
INCDIR           = ./inc
LIBDIR           = ./lib
LIBINCDIR        = ./lib/inc
DLLDIR           = ./dll
DLLINCDIR        = ./dll/inc
CLIENTDLLDIR     = ../MyExperiment/dll
CLIENTDLLINCDIR  = ../MyExperiment/dll/inc

CC         = g++ -DCOMPILING_DLL
CCFLAGS    = -g -std=c++11 -Wall -MMD -MP
LINK       = g++ -shared -o 
LIBS       = -lm
COPY       = cp

SOURCES      = $(wildcard $(SRCDIR)/*.cpp)
DLLINCLUDES  = $(wildcard $(INCDIR)/*.h)
INCLUDES     = $(wildcard $(INCDIR)/*.h) \
							 $(wildcard $(LIBINCDIR)/*.h) \
						   $(wildcard $(DLLINCDIR)/*.h)
MYLIBS       = $(wildcard $(LIBDIR)/*.a)
MYLIBS       = $(wildcard $(DLLDIR)/*.dll)
OBJECTS      = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
DEPS         = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.d)

.PHONY : all
all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LINK) $(BINDIR)/$(TARGET) $^ $(LIBS) $(MYLIBS) $(MYDLLS)
	@$(COPY) $(DLLINCLUDES) $(CLIENTDLLINCDIR)
	@$(COPY) $(BINDIR)/$(TARGET) $(CLIENTDLLDIR)	
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CCFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"
	
-include $(DEPS)

RM         = rm -f

.PHONY: clean
clean:
	@$(RM) $(OBJECTS)
	@$(RM) $(DEPS)
	@$(RM) $(BINDIR)/$(TARGET)
	@echo "Cleanup complete!"

.PHONY: rebuild
rebuild: clean all