//
//  MasterViewController.h
//  Prototyper-Test
//
//  Created by Sven Trebard on 23/01/15.
//  Copyright (c) 2015 Tieto Corp. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

