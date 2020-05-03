import java.io.FileWriter;
import java.io.IOException;

public class AssemblyWriter {

    FileWriter writer;

    AssemblyWriter(FileWriter w) {
        this.writer = w;
    }

    // ---------------------------------
    // ----------- Variables -----------
    // ---------------------------------

    void createVar(String name) {
        try {
            writer.append("var " + name);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    void createStr(String name, String value) {
        try {
            writer.append("str " + name + " \"" + value + "\"");
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // ----------------------------------
    // ----------- Operations -----------
    // ----------------------------------

    // label l : a jump target
    void createLabel(String l) {
        try {
            writer.append("label " + l);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // move mem target : move mem into target
    void createMove(String mem, String target) {
        try {
            writer.append("move " + mem + " " + target);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // addi dest add : computes dest = dest + add
    void createAddi(String dest, String add) {
        try {
            writer.append("addi " + dest + " " + add);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // addr dest add : computes dest = dest + add
    void createAddr(String dest, String add) {
        try {
            writer.append("addi " + dest + " " + add);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // subi dest add : computes dest = dest - sub
    void createSubi(String dest, String sub) {
        try {
            writer.append("subi " + dest + " " + sub);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // subr dest add : computes dest = dest - sub
    void createSubr(String dest, String sub) {
        try {
            writer.append("subr " + dest + " " + sub);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // muli dest add : computes dest = dest * mul
    void createMuli(String dest, String mul) {
        try {
            writer.append("muli " + dest + " " + mul);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // mulr dest add : computes dest = dest * mul
    void createMulr(String dest, String mul) {
        try {
            writer.append("mulr " + dest + " " + mul);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // divi dest add : computes dest = dest / div
    void createDivi(String dest, String div) {
        try {
            writer.append("divi " + dest + " " + div);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // divr dest add : computes dest = dest / div
    void createDivr(String dest, String div) {
        try {
            writer.append("divr " + dest + " " + div);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // cmpi op1 op2 : integer comparison of op1 and op2
    void createCmpi(String op1, String op2) {
        try {
            writer.append("cmpi " + op1 + " " + op2);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // cmpr op1 op2 : real comparison of op1 and op2
    void createCmpr(String op1, String op2) {
        try {
            writer.append("cmpr " + op1 + " " + op2);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jmp tar : unconditional jump to tar
    void createJmp(String tar) {
        try {
            writer.append("jmp " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jgt tar : jump to tar on greater than
    void createJgt(String tar) {
        try {
            writer.append("jgt " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jlt tar : jump to tar on less than
    void createJlt(String tar) {
        try {
            writer.append("jlt " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jge tar : jump to tar on greater or equal
    void createJge(String tar) {
        try {
            writer.append("jge " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jle tar : jump to tar on less or equal
    void createJle(String tar) {
        try {
            writer.append("jle " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jeq tar : jump to tar on equal
    void createJeq(String tar) {
        try {
            writer.append("jeq " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jne tar : jmp to tar on unequal
    void createJne(String tar) {
        try {
            writer.append("jne " + tar);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // sys readi mem : read console input (integer) into mem
    void createReadi(String mem) {
        try {
            writer.append("sys readi " + mem);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // sys readr mem : read console input (real) into mem
    void createReadr(String mem) {
        try {
            writer.append("sys readr " + mem);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // sys writei mem : write mem (integer) to console
    void createWritei(String mem) {
        try {
            writer.append("sys writei " + mem);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // sys writer mem : write mem (real) to console
    void createWriter(String mem) {
        try {
            writer.append("sys writer " + mem);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // sys writes mem : write mem (string) to console
    void createWrites(String mem) {
        try {
            writer.append("sys writes " + mem);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // sys halt : system call to end execution (must be called at the end of every program)
    void createHalt() {
        try {
            writer.append("sys halt");
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // jsr target : jump to function call
    void createJSR(String target) {
        try {
            writer.append("jsr " + target);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    // ret : return to place before function call
    void createRet() {
        try {
            writer.append("ret");
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }

    void createComment(String comment) {
        try {
            writer.append(";" + comment);
            writer.append("\n");
        } catch(IOException e) {
            e.printStackTrace();
            System.exit(-1);
        }
    }
}