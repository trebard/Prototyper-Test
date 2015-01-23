//
//  DetailViewController.h
//  Prototyper-Test
//
//  Created by Sven Trebard on 23/01/15.
//  Copyright (c) 2015 Tieto Corp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

