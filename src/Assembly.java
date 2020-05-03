public class Assembly {

    // Tiny accepts the following assembly codes:

    // var id                       ; // reserves and names a memory cell. first letter alphanum then alphanum with punctuations, case sensitive both integer and real (float) have the size of one memory cell
    // str sid "a string constant"  ; //the only operation on string constants is sys writes sid strings can include \n for end-of-line

    // var and str declarations must preceed all code and labels (during debugging,
    // enforcement of this rule can be disabled. See the "mix" command line option)

    // label target           ; a jump target
    // move opmrl opmr        ; only one operand can be a memory id or stack variable
    // addi opmrl reg         ; integer addition, reg = reg + op1
    // addr opmrl reg         ; real (i.e. floatingpoint) addition
    // subi opmrl reg         ; computes reg = reg - op1
    // subr opmrl reg
    // muli opmrl reg         ; computes reg = reg * op1
    // mulr opmrl reg
    // divi opmrl reg         ; computes reg = reg /  op1
    // divr opmrl reg
    // inci reg               ; increment the (integer) register value by 1
    // deci reg               ; decrement the (integer) register value by 1
    // cmpi opmrl reg         ; integer comparison; must preceed  a conditional jump it compares the first operand with the second op and sets  the "processor status".
    //                          (The status remains the same until the next cmp instruction is executed.) E.g, a subsequent jgt will jump if op1 > op2


    // push opmrl             ; push a data item onto the stack. Operand can be omitted, in which case an empty element is pushed.
    // pop  opmr              ; pops an element from the stack. If the operand is non-empty, the element is moved there
    // jsr target             ; jump to target and push the current pc onto the stack
    // ret                    ; pop an address from the stack and jump there
    // link #                 ; push frame pointer (fp) onto stack, copy sp into fp, push # empty cells onto stack
    // unlnk                  ; copy fp into sp, pop fp from stack

    // cmpr opmrl reg         ; real comparison
    // jmp target             ; unconditional jump
    // jgt target             ; jump if (op1 of the preceeding cmp was) greater (than op2)
    // jlt target             ; jump if less than
    // jge target             ; jump if greater of equal
    // jle target             ; jump if less or equal
    // jeq target             ; jump if equal
    // jne target             ; jump if not equal
    // sys readi  opmr        ; system call for reading an integer from input
    // sys readr  opmr        ; system call for reading a real value
    // sys writei opmr        ; system call for outputting an integer
    // sys writer opmr        ; system call for outputting an integer
    // sys writes sid         ; system call for outputting a string constant
    // sys halt               ; system call to end the execution
    // end                    ; end of the assembly code (not an opcode)


    // notation used for the operands:
    // id      stands for the name of a memory location
    // sid     stands for the name of a string constant
    // #       stands for an integer number
    // target  stands for the name of a jump target
    // $offset stands for a stack variable at address fp+offset
    // reg     stands for a  register, named r0,r1,r2, or r3, case insensitive
    // opmrl   stands for a memory id, stack variable, register or a number (literal),
    // the format for real is digit*[.digit*][E[+|-]digit*]
    // opmr    stands for a memory id, stack variable, or a register

    // ; semicolon leads in a comment (which is ignored by the interpreter). It can be at the beginning on a line or after an assembly code

    // data representation:

    // No assumption can be made about the representations. Real and integer cannot be
    // mixed.  Using an integer where a real is expected (and vice versa) leads to
    // undefined results.
}
