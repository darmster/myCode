//darmster fix 12-22-13

//package google;
/* Start of class...
 */
 
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.Writer;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;
 
public class Order {
 
    // All the user input
    private String TicketId, ServerId, Customer, Memory, HD, OS, MainIp, IpBlock, SwitchPort, DracPort, DracIp, Speed, Location, Rebooter, Notes, RootPW, StartIpRange, EndIpRange, Old, New, VmIp, NoCPU;
 
    Scanner user_input = new Scanner(System.in);
    String newLine = System.getProperty("line.separator");
    // Q&A:  methods to create reports
    StringBuilder sb;
 
    String Orderparts(File file) {
 
        sb = new StringBuilder();
        sb.append("### Order Parts ###").append('\n');
        System.out.print("TickeID:");
        TicketId = "TicketId: " + user_input.nextLine() + newLine;
        sb.append(TicketId);
        System.out.print("ServerID:");
        ServerId = "ServerId: " + user_input.nextLine() + newLine;
        sb.append(ServerId);
        System.out.print("Customer:");
        Customer = "Customer: " + user_input.nextLine() + newLine;
        sb.append(Customer);
        System.out.print("Memory:");
        Memory = "Memory: " + user_input.nextLine() + newLine;
        sb.append(Memory);
        System.out.print("HD:");
        HD = "HD: " + user_input.nextLine() + newLine;
        sb.append(HD);
        System.out.print("OS:");
        OS = "OS: " + user_input.nextLine() + newLine;
        sb.append(OS);
        System.out.print("MainIP:");
        MainIp = "MainIp: " + user_input.nextLine() + newLine;
        sb.append(MainIp);
        System.out.print("Checked IPKVM?:");
        // Needs to be a enum y or no... maybe
        System.out.println("Location:");
        Location = "Location: " + user_input.nextLine() + newLine;
        sb.append(Location);
        System.out.print("Switch(Port):");
        SwitchPort = "SwitchPort: " + user_input.nextLine() + newLine;
        sb.append(SwitchPort);
        System.out.print("Drac(Port):");
        DracPort = "DracPort: " + user_input.nextLine() + newLine;
        sb.append(DracPort);
        System.out.print("Drac IP:");
        DracIp = "DracIp: " + user_input.nextLine() + newLine;
        sb.append(DracIp);
        System.out.print("Rebooter:");
        Rebooter = "Rebooter: " + user_input.nextLine() + newLine;
        sb.append(Rebooter);
        System.out.print("Notes:");
        Notes = "Notes: " + user_input.nextLine() + newLine;
        sb.append(Notes).append('\n');
        sb.append("##########").append('\n');
        try {
            FileOutputStream fw = new FileOutputStream(file,true);
            Writer out = new BufferedWriter(new OutputStreamWriter(fw));
            out.write(sb.toString());
            out.close();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        }
        return "";
    }
 
    String Update() {
        return "";
    }
 
    String PortRequest(File file) {
        sb = new StringBuilder();
        sb.append("### Port request ###").append('\n');
        System.out.print("Customer: ");
        Customer = "Customer: " + user_input.nextLine() + newLine;
        sb.append(Customer);
 
        System.out.print("ipblock: ");
        IpBlock = "IpBlock: " + user_input.nextLine() + newLine;
        sb.append(IpBlock);
 
        System.out.print("Switch (Port)");
        SwitchPort = "SwitchPort: " + user_input.nextLine() + newLine;
        sb.append(SwitchPort);
 
        System.out.print("speed ");
        Speed = "Speed: " + user_input.nextLine() + newLine;
        sb.append(Speed);
 
        System.out.print("Location:");
        Location = "Location: " + user_input.nextLine() + newLine;
        sb.append(Location).append('\n');
        sb.append("#########").append('\n');
        try {
            FileOutputStream fw = new FileOutputStream(file,true);
            Writer out = new BufferedWriter(new OutputStreamWriter(fw));
            out.write(sb.toString());
            out.close();
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        }
        return "";
    }
 
    String Billing() {
        System.out.print("TicketID: ");
        TicketId = user_input.next();
        System.out.print("ServerID: ");
        ServerId = user_input.next();
        System.out.print("Old: ");
        Old = user_input.next();
        System.out.print("New: ");
        New = user_input.next();
        System.out.print("Number of CPU's: ");
        NoCPU = user_input.next();
        System.out.print("VM IP(if necessary): ");
        VmIp = user_input.next();
        return "";
    }
 
    String Print() {
        return "";
    }
 
    String Regarding() {
 
        System.out.print("ServerID:");
        ServerId = user_input.nextLine();
 
        System.out.print("OS:");
        OS = user_input.nextLine();
 
        System.out.print("MainIP:");
        MainIp = user_input.nextLine();
 
        System.out.print("RootPW: ");
        RootPW = "Root PW: " + user_input.next();
 
        System.out.print("Start IP range: ");
        StartIpRange = user_input.next();
 
        System.out.print("End IP range: ");
        EndIpRange = user_input.next();
 
        System.out.println("### Regarding ####");
        System.out.println("Hello, "
                + "\nHere's the information for your new server. Please use Server ID# for reboots & support."
                + "\nServerID#:" + ServerId
                + "\nOS: " + OS
                + "\nMainIP: " + MainIp
                + "\nroot's password: " + RootPW + "(please change asap)"
                + "\n"
                + "Available IP's: " + StartIpRange + " - " + EndIpRange
                + "\nOur 24/7 support hotline is 1-800-618-4628 extension 1."
                + "\nIf your are abroad from our datacenter use 661.977.9436.  Also our ticketing system and online chat is available 24/7."
                + "\nLet us know if you need any assistance with your server."
                + "\n\n Thank you for choosing Multacom!"
                + " \n");
        return "";
    }
 
    String Modify() {
        return "";
    }
 
} //end of class
