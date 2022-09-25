#ifndef SIMULATOR_
#define SIMULATOR_

class CPU
{
private:
    int r0;
    int r1;
    int r2;
    int r3;
    int r4;
    int r5;
    int r6;
    int r7;
    int r8;
    int r9;
public:
    void make();
    void translate();
    std::string compare(std::string&, std::string&);
    void move_instuction(std::string&, std::string&);
    void print(std::string&);
 public:   
    void add_instruction(std::string&, std::string&);
    void sub_instruction(std::string&, std::string&);
    void mul_instruction(std::string&, std::string&);
    void div_instruction(std::string&, std::string&);
 public:   
    void or_instruction(std::string&, std::string&);
    void and_instruction(std::string&, std::string&);
    void xor_instruction(std::string&, std::string&);
 public:   
    CPU();
public:    
    std::map <std::string, int*> mp;
    std::map <std::string, int> jump; 
    std::map <std::string, std::vector<std::string>> cond;
}obj;

#endif //SIMULATOR_