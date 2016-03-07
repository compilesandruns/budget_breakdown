//
//  AddItemViewController.h
//  Budget_App
//
//  Created by Stephanie on 3/7/16.
//  Copyright © 2016 Stephanie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddItemViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIPickerView *categotyPicker;
@property (weak, nonatomic) IBOutlet UITextField *itemNameTextBox;
@property (weak, nonatomic) IBOutlet UITextField *itemAmountTextBox;
@property (weak, nonatomic) IBOutlet UITextField *itemPaidFrequencyTextBox;
@property (weak, nonatomic) IBOutlet UIPickerView *itemPaidFrequencyPicker;
@property (weak, nonatomic) IBOutlet UITextView *notesTextField;

@end
