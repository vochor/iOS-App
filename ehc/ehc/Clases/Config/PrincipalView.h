//
//  MyDropdownMenuController.h
//  DropdownMenuDemo
//
//  Created by Nils Mattisson on 1/13/14.
//  Copyright (c) 2014 Nils Mattisson. All rights reserved.
//

#import "DropdownMenuController.h"
#import "MenuViewController.h"

@interface PrincipalView : DropdownMenuController<UIGestureRecognizerDelegate,ContentUserScreenDelegate>

- (IBAction)buttonExitTouch:(id)sender;

@end
