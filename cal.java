import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class cal extends JFrame implements ActionListener {
    JTextField t;
    JButton nums[] = new JButton[10];
    JButton add,sub,mul,div,eq,clr;
    int a=0,b=0;
    char op;
    cal(){
        setTitle("Calculator");
        setSize(300,400);
        setLayout(new BorderLayout());

        t = new JTextField(10);
        add(t,BorderLayout.NORTH);
        t.setEditable(true);
        JPanel p = new JPanel();
        p.setLayout(new GridLayout(4,4));
        

        for(int i=0; i<10; i++)
         { nums[i] = new JButton(""+i);
            add(nums[i]);
            nums[i].addActionListener(this);
        }
        add = new JButton("+"); 
        sub = new JButton("-");
        mul = new JButton("*");
        div = new JButton("/");
        eq = new JButton("=");
        clr = new JButton("C");

        add(add);  add.addActionListener(this);
        add(sub);  sub.addActionListener(this);
        add(mul);  mul.addActionListener(this);
        add(div);  div.addActionListener(this);
        add(eq);   eq.addActionListener(this);
        add(clr);  clr.addActionListener(this);

        p.add(nums[7]);  p.add(nums[8]);  p.add(nums[9]);  p.add(mul); 
         p.add(nums[4]);  p.add(nums[5]);  p.add(nums[6]);  p.add(sub); 
          p.add(nums[1]);  p.add(nums[2]);  p.add(nums[3]);  p.add(add); 
            p.add(nums[0]);  p.add(clr);  p.add(eq);  p.add(div); 
        add(p,BorderLayout.CENTER);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e){
        Object o = e.getSource();
        for(int i=0;i<10;i++){
            if(o==nums[i]){
                t.setText(t.getText()+i);
                return ;}}
            
        if(o==clr){
                t.setText("");
            }
            else if(o==add||o==sub||o==mul||o==div){
                a = Integer.parseInt(t.getText());
                op=((JButton)o).getText().charAt(0);
                t.setText("");
            }
            else if(o==eq){
                int r =0;
                b=Integer.parseInt(t.getText());
                switch(op){
                    case '+' : r= a+b; t.setText(""+r);break;
                    case '-' : r= a-b; t.setText(""+r);break;
                    case '*' : r= a*b; t.setText(""+r);break;
                    case '/' : try{ r= a/b; break;}catch(ArithmeticException E){
                        t.setText("ERROR: can't / by 0");
                    }
                }
                
            }
        
    }
    public static void main(String[] args){
        new cal();
    }

}
