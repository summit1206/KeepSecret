

#import <UIKit/UIKit.h>

@interface EditingCell : UITableViewCell<UITextViewDelegate>

@property (nonatomic,strong) NSMutableDictionary *item;
@property (nonatomic,strong) UITextField *titleTextField;
@property (nonatomic,strong) UITextView *contentTextView;
@property (nonatomic,copy) void (^getCellData)(NSMutableDictionary *item);

@end
