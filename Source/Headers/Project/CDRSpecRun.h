#import <Foundation/Foundation.h>
#import "CDRStateTracking.h"

@class CDRReportDispatcher;

@interface CDRSpecRun : NSObject

@property (nonatomic, retain, readonly) NSArray *specs;
@property (nonatomic, retain, readonly) NSArray *rootGroups;
@property (nonatomic, retain, readonly) CDRReportDispatcher *dispatcher;
@property (nonatomic, assign, readonly) unsigned int seed;

- (instancetype)initWithStateTracker:(id<CDRStateTracking>)stateTracker
                    exampleReporters:(NSArray *)reporters;
- (int)performSpecRun:(void (^)(void))runBlock;

@end
