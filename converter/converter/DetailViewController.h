//
//  DetailViewController.h
//  converter
//
//  Created by Gary Damm on 5/12/13.
//  Copyright (c) 2013 Matthew Damm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
