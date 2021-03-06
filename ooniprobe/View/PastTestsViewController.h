// Part of MeasurementKit <https://measurement-kit.github.io/>.
// MeasurementKit is free software. See AUTHORS and LICENSE for more
// information on the copying conditions.

#import <UIKit/UIKit.h>
#import "ResultViewController.h"
#import "ResultSelectorViewController.h"
#import "TestStorage.h"
#import "UIView+Toast.h"
#import "RunButton.h"
#import "PBRevealViewController.h"
#import "UIButton+Badge.h"
#import "Tests.h"

@interface PastTestsViewController : UITableViewController <PBRevealViewControllerDelegate>{
    NSMutableArray *finishedTests;
    NetworkMeasurement *nextTest;
}


@end
