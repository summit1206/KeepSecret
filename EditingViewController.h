

#import <UIKit/UIKit.h>

@interface EditingViewController : UITableViewController

@property (nonatomic,strong) NSMutableArray *buttonsData;
@property (nonatomic,strong) NSMutableArray *saveData;
@property (nonatomic,copy) void (^addData)(void);

@end
