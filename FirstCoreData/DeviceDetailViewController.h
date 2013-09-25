//
//  DeviceDetailViewController.h
//  FirstCoreData
//
//  Created by Omar Gonzalez ochoa on 15/08/13.
//  Copyright (c) 2013 Omar Gonzalez ochoa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DeviceDetailViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *versionTextField;
@property (weak, nonatomic) IBOutlet UITextField *companyTextField;

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;

@end
