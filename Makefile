CXX = g++
CXXFLAGS = -Wall -Iinclude
SRCDIR = src
OBJDIR = build
TARGET = $(OBJDIR)/VSMS

SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/function.cpp $(SRCDIR)/Menu.cpp
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

$(TARGET): $(OBJECTS)
	@mkdir -p $(OBJDIR)
	$(CXX) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJDIR)/*.o $(TARGET)
