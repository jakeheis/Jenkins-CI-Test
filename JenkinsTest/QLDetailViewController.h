//
//  QLDetailViewController.h
//  JenkinsTest
//
//  Created by Jake Heiser on 9/6/12.
//  Copyright (c) 2012 Quizlet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QLDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
