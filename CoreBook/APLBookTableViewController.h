//
//  APLBookTableViewController.h
//  CoreBook
//
//  Created by Adrian Perez Lopez on 1/10/16.
//  Copyright © 2016 NovasFactory. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGTCoreDataTableViewController.h"

@class APLLibrary;

@interface APLBookTableViewController : AGTCoreDataTableViewController

-(id) initWithFetchedResultsController:(NSFetchedResultsController *) aFetchedResultsController
                               library:(APLLibrary *) aLibrary
                                 style:(UITableViewStyle) aStyle;
@end
