TARGET     = MyExperiment.exe

SRCDIR     = ./src
OBJDIR     = ./obj
BINDIR     = ./bin
INCDIR     = ./inc
LIBDIR     = ./lib
LIBINCDIR  = ./lib/inc
DLLDIR     = ./dll
DLLINCDIR  = ./dll/inc

CC         = g++
CCFLAGS    = -g -std=c++11 -Wall -MMD -MP
LINK       = g++ -o
LIBS       = -lm
COPY       = cp

SOURCES   = $(wildcard $(SRCDIR)/*.cpp)
INCLUDES  = $(wildcard $(INCDIR)/*.h) \
						$(wildcard $(LIBINCDIR)/*.h) \
						$(wildcard $(DLLINCDIR)/*.h)
MYLIBS    = $(wildcard $(LIBDIR)/*.a)
MYDLLS    = $(wildcard $(DLLDIR)/*.dll)
OBJECTS   = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
DEPS      = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.d)

.PHONY : all
all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LINK) $@ $^ $(MYDLLS) $(MYLIBS) $(LIBS)
	@$(COPY) $(MYDLLS) $(BINDIR)
	@echo "Linking complete!"

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@$(CC) $(CCFLAGS) -c $< -o $@
	@echo "Compiled "$<" successfully!"
	
-include $(DEPS)

BINDIRDLLS = $(wildcard $(BINDIR)/*.dll)

RM         = rm -f

.PHONY: clean
clean:
	@$(RM) $(OBJECTS)
	@$(RM) $(DEPS)
	@$(RM) $(BINDIR)/$(TARGET)
	@$(RM) $(BINDIRDLLS)
	@echo "Cleanup complete!"

.PHONY: rebuild
rebuild: clean all