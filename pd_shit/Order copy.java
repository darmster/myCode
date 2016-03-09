package edu.ucla.itsvcs.ims.idm.queryservice.darmis.code;//~--- JDK imports -------------------------------------------------------------

//package google;

/*Start of class...
 */

import java.io.*;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

//~--- classes -----------------------------------------------------------------

/**
 * Class description
 *
 *
 * @version        Enter version here..., 12.Dec 2013
 * @author         Anthony Merriweather
 */
public class Order
{
    // All the user input

    /** Field description */
    private String TicketId, ServerId, Customer, Memory, HD, OS, MainIp, IpBlock, SwitchPort, DracPort, DracIp, Speed, Location, Rebooter, Notes, RootPW, StartIpRange, EndIpRange, Old, New, VmIp,
                   NoCPU;

    /** Field description */
    Scanner       user_input = new Scanner(System.in);

    /** Field description */
    String        newLine    = System.getProperty("line.separator");

    // Q&A:  methods to create reports

    /** Field description */
    StringBuilder sb;



    //~--- methods -------------------------------------------------------------

    /**
     * Method description
     *
     *
     * @return
     */
    String Billing()
    {
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




    /**
     * Method description
     *
     *
     * @return
     */
    String Modify()
    {
        return "";
    }




    /**
     * Method description
     *
     *
     * @param file
     *
     * @return
     */
    String Orderparts(File file)
    {
        sb = new StringBuilder();
        sb.append("### Order Parts ###").append(newLine);
        System.out.print("TickeID:");
        TicketId = "TicketId= " + user_input.nextLine() + newLine;
        sb.append(TicketId);
        System.out.print("ServerID:");
        ServerId = "ServerId= " + user_input.nextLine() + newLine;
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
        System.out.print("Location:");
        Location = "Location: " + user_input.nextLine() + newLine;
        sb.append(Location);
        System.out.print("Switch (Port)");
        SwitchPort = "SwitchPort: " + user_input.nextLine() + newLine;
        sb.append(SwitchPort);
        System.out.print("Drac switch(Port):");
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
        sb.append(Notes);
        sb.append("### Order Parts ###");

        try
        {
            FileOutputStream fw  = new FileOutputStream(file);
            Writer           out = new BufferedWriter(new OutputStreamWriter(fw));



            out.write(sb.toString());
            out.close();
        }
        catch (FileNotFoundException ex)
        {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        }
        catch (IOException ex)
        {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        }

        return "";
    }




    /**
     * Method description
     *
     *
     * @param file
     *
     * @return
     */
    String PortRequest(File file)
    {
        sb = new StringBuilder();
        sb.append("### Port request ###").append(newLine);
        System.out.print("Customer: ");
        Customer = "Customer: " + user_input.nextLine() + newLine;
        sb.append(Customer);

        System.out.print("ipblock: ");
        IpBlock = "IpBlock: " + user_input.next() + newLine;
        sb.append(IpBlock);

        System.out.print("Switch (Port)");
        SwitchPort = "SwitchPort: " + user_input.nextLine() + newLine;
        sb.append(SwitchPort);

        System.out.print("speed ");
        Speed = "Speed: " + user_input.next() + newLine;
        sb.append(Speed);

        System.out.print("Location:");
        Location = "Location: " + user_input.nextLine() + newLine;
        sb.append(Location);
        sb.append("### Port request ###");

        try
        {
            //FileOutputStream fw  = new FileOutputStream(file, true);
            //Writer           out = new BufferedWriter(fw);
            //out.print(sb.toString());
            //out.close();

            PrintWriter printWriter = new PrintWriter( new FileWriter( file, true));
            printWriter.print( sb);
            printWriter.close();

        }
        catch (FileNotFoundException ex)
        {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        }
        catch (IOException ex)
        {
            Logger.getLogger(Order.class.getName()).log(Level.SEVERE, null, ex);
        }

        return "";
    }




    /**
     * Method description
     *
     *
     * @return
     */
    String Print()
    {
        return "";
    }




    /**
     * Method description
     *
     *
     * @return
     */
    String Regarding()
    {
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
        System.out.println("Hello, " + "\nHere's the information for your new server. Please use Server ID# for reboots & support." + "\nServerID#:" + ServerId + "\nOS: " + OS + "\nMainIP: " +
                           MainIp + "\nroot's password: " + RootPW + "(please change asap)" + "\n" + "Available IP's: " + StartIpRange + " - " + EndIpRange +
                           "\nOur 24/7 support hotline is 1-800-618-4628 extension 1." +
                           "\nIf your are abroad from our datacenter use 661.977.9436.  Also our ticketing system and online chat is available 24/7." +
                           "\nLet us know if you need any assistance with your server." + "\n\n Thank you for choosing Multacom!" + " \n");

        return "";
    }




    /**
     * Method description
     *
     *
     * @return
     */
    String Update()
    {
        return "";
    }
}    // end of class

