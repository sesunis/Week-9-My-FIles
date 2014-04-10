//
//  MyFilesViewController.h
//  MyFiles
//
//  Created by Sarah Esunis on 4/3/14.
//  Copyright (c) 2014 RVC Student. All rights reserved.

#import <UIKit/UIKit.h>

@interface MyFilesViewController : UIViewController
@property (retain, nonatomic) IBOutlet UIView *WebView;
- (IBAction)btnLocal:(id)sender;
- (IBAction)btnWeb:(id)sender;
- (IBAction)btnLocal2:(id)sender;

- (IBAction)btnWeb2:(id)sender;


@end
