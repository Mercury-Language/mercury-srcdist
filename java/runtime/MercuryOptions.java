//
// Copyright (C) 2014 The Mercury Team 
// This file may only be copied under the terms of the GNU Library General
// Public License - see the file COPYING.LIB in the Mercury distribution.
//

package jmercury.runtime;

import java.util.List;

/**
 * Process the MERCURY_OPTIONS environment variable.
 */
public class MercuryOptions {
    
    private int num_processors;

    /**
     * Create a new MercuryOptions object.
     * This constructor is package-private (no access declration).
     */
    MercuryOptions()
    {
        // Zero means autodetect
        num_processors = 0;
    }

    public void process()
    {
        String          options;

        options = System.getenv("MERCURY_OPTIONS");
        if (options != null) {
            Getopt getopt = new Getopt(options);
            List<String> args;

            for (Getopt.Option option : getopt) {
                if (option.optionIs("P")) {
                    num_processors = option.getValueInt();
                } else {
                    System.err.println("Unrecognized option: " + option);
                    System.exit(1);
                }
            }
            args = getopt.getArguments();
            if (args.size() > 0) {
                System.err.println(
                    "Error parsing MERCURY_OPTIONS environment variable,"
                    + " unexpected: " + args.get(0));
            }
        }
    }

    /**
     * Get the number of processors in the machine.
     */
    public int getNumProcessors() {
        return num_processors;
    }

}
