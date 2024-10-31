

import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Color;
import java.awt.Font;
import javax.swing.SwingConstants;
import javax.swing.JButton;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculator implements ActionListener{

    boolean isOperatorClicked= false;
    String oldValue;
    JFrame jf;
    JLabel displayLabel;
    JButton sevenButton;
    JButton eightButton;
    JButton nineButton;
    JButton fourButton;
    JButton fiveButton;
    JButton sixButton;
    JButton oneButton;
    JButton twoButton;
    JButton threeButton;
    JButton dotButton;
    JButton zeroButton;
    JButton eqlButton;
    JButton divButton;
    JButton multiButton;
    JButton addButton;
    JButton subtrButton;
    JButton clearButton;
     
    public Calculator(){
        jf = new JFrame("Calculator");
        jf.setLayout(null);
        jf.setSize(600,600);
        jf.setLocation(200, 200);

        displayLabel = new JLabel();
        displayLabel.setBounds(30,50,540,40);
        displayLabel.setBackground(Color.GRAY);
        displayLabel.setOpaque(true);
        displayLabel.setHorizontalAlignment(SwingConstants.RIGHT);
        displayLabel.setForeground(Color.WHITE);
        jf.add(displayLabel);
 
        sevenButton = new JButton("7"); 
        sevenButton.setBounds( 30, 130, 80, 80);
        sevenButton.addActionListener(this);
        sevenButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(sevenButton);

        eightButton = new JButton("8"); 
        eightButton.setBounds( 130, 130, 80, 80);
        eightButton.addActionListener(this);
        eightButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(eightButton);

        nineButton = new JButton("9"); 
        nineButton.setBounds( 230, 130, 80, 80);
        nineButton.addActionListener(this);
        nineButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(nineButton);

        fourButton = new JButton("4"); 
        fourButton.setBounds( 30, 230, 80, 80);
        fourButton.addActionListener(this);
        fourButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(fourButton);

        fiveButton = new JButton("5"); 
        fiveButton.setBounds( 130, 230, 80, 80);
        fiveButton.addActionListener(this);
        fiveButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(fiveButton);

        sixButton = new JButton("6"); 
        sixButton.setBounds( 230, 230, 80, 80);
        sixButton.addActionListener(this);
        sixButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(sixButton);

        oneButton = new JButton("1"); 
        oneButton.setBounds( 30, 330, 80, 80);
        oneButton.addActionListener(this);
        oneButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(oneButton);

        twoButton = new JButton("2"); 
        twoButton.setBounds( 130, 330, 80, 80);
        twoButton.addActionListener(this);
        twoButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(twoButton);

        threeButton = new JButton("3"); 
        threeButton.setBounds( 230, 330, 80, 80);
        threeButton.addActionListener(this);
        threeButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(threeButton);

        dotButton = new JButton("."); 
        dotButton.setBounds( 30, 430, 80, 80);
        dotButton.addActionListener(this);
        dotButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(dotButton);

        zeroButton = new JButton("0"); 
        zeroButton.setBounds( 130, 430, 80, 80);
        zeroButton.addActionListener(this);
        zeroButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(zeroButton);

        eqlButton = new JButton("="); 
        eqlButton.setBounds( 230, 430, 80, 80);
        eqlButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(eqlButton);

        divButton = new JButton("/"); 
        divButton.setBounds( 330, 130, 80, 80);
        divButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(divButton);

        multiButton = new JButton("X"); 
        multiButton.setBounds( 330, 230, 80, 80);
        multiButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(multiButton);

        subtrButton = new JButton("-"); 
        subtrButton.setBounds( 330, 330, 80, 80);
        subtrButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(subtrButton);

        addButton = new JButton("+"); 
        addButton.setBounds( 330, 430, 80, 80);
        addButton.setFont(new Font("Ariel", Font.PLAIN, 40));
        jf.add(addButton);

        clearButton = new JButton("Clear"); 
        clearButton.setBounds( 430, 430, 80, 80);
        clearButton.setFont(new Font("Ariel", Font.PLAIN, 20));
        jf.add(clearButton);

        jf.setVisible(true);
        jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

    public static void main(String[] args) {
     new Calculator(); 
    }
    public void actionPerformed (ActionEvent e){
        if(e.getSource()== sevenButton){
            if(isOperatorClicked){
                displayLabel.setText("7");
                isOperatorClicked= false;
            }else{
                displayLabel.setText(displayLabel.getText()+"7"); 
            }
        }else if(e.getSource()== eightButton){
            displayLabel.setText(displayLabel.getText()+"8");
        }else if(e.getSource()== nineButton){
            displayLabel.setText(displayLabel.getText()+"9");
        }else if(e.getSource()== fourButton){
            displayLabel.setText(displayLabel.getText()+"4");
        }else if(e.getSource()== fiveButton){
            displayLabel.setText(displayLabel.getText()+"5");
        }else if(e.getSource()== sixButton){
            displayLabel.setText(displayLabel.getText()+"6");
        }else if(e.getSource()== oneButton){
            displayLabel.setText(displayLabel.getText()+"1");
        }else if(e.getSource()== twoButton){
            displayLabel.setText(displayLabel.getText()+"2");
        }else if(e.getSource()== threeButton){
            displayLabel.setText(displayLabel.getText()+"3");
        }else if(e.getSource()== zeroButton){
            displayLabel.setText(displayLabel.getText()+"0");
        }else if(e.getSource()== dotButton){
            displayLabel.setText(displayLabel.getText()+".");
        }else if(e.getSource()== eqlButton){
            String newValue = displayLabel.getText();
            double oldValueF = Float.parseFloat(oldValue);
            double newValueF = Float.parseFloat(newValue);
            double result = oldValueF + newValueF;
            displayLabel.setText(result+"");
        }else if(e.getSource()== divButton){
            
        }else if(e.getSource()== multiButton){
            
        }else if(e.getSource()== subtrButton){
            
        }else if(e.getSource()== addButton){
            isOperatorClicked = true;
            oldValue = displayLabel.getText();
        }else if(e.getSource()== clearButton){
            displayLabel.setText("");
        }
    }    
}
