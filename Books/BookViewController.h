//
//  ViewController.h
//  Books
//
//  Created by Kamireddi, Gaurav Venkata Satya Pratik on 11/15/17.
//  Copyright © 2017 Kamireddi, Gaurav Venkata Satya Pratik. All rights reserved.
//

#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface BookViewController : UIViewController
//{
//    UIDatePicker *datePicker;
//}
@property (weak, nonatomic) IBOutlet UIDatePicker *datePickerControl;
@property (weak, nonatomic) IBOutlet UILabel *lblSelectedDate;
@property (weak, nonatomic) IBOutlet UITextField *titleTextField;
@property (weak, nonatomic) IBOutlet UITextField *authorTextField;
@property (weak, nonatomic) IBOutlet UITextField *subjectnameTextField;
//@property (weak, nonatomic) IBOutlet UITextField *dateSelectionTextField;
@property (strong) NSManagedObject *book;
- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;
- (IBAction)datePicker:(id)sender;

@end

