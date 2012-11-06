//
//  DetailViewController.h
//  qatarlyom
//
//  Created by Khalid Ahmed on 11/5/12.
//  Copyright (c) 2012 qatarlyom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
