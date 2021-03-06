//
//  ViewController.h
//  NSXMLParserExample
//
//  Created by Kobe Dai on 11/11/12.
//  Copyright (c) 2012 Kobe Dai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewController.h"

@interface ViewController : UIViewController <NSXMLParserDelegate, NSURLConnectionDataDelegate>

@property (strong, nonatomic) TableViewController *tableViewController;

@property (retain, nonatomic) NSMutableArray *linksArray;
@property (retain, nonatomic) NSMutableArray *titlesArray;
@property (retain, nonatomic) NSMutableArray *datesArray;

- (IBAction)loadTableView :(id)sender;

@end
