//
//  MasterViewController.h
//  qatarlyom
//
//  Created by Khalid Ahmed on 11/5/12.
//  Copyright (c) 2012 qatarlyom. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
