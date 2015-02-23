//
//  BIDMasterViewController.h
//  TinyPix
//
//  Created by Dejan Kumric on 2/21/15.
//  Copyright (c) 2015 Dejan Kumric. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDMasterViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UISegmentedControl *colorControl;
- (IBAction)chooseColor:(id)sender;
@end
