//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCAbuseWarningWorkflowDelegate, SCUIContainer;

@interface SCAbuseWarningScope : NSObject
{
    NSString *_abuseWarningId;
    NSString *_abuseWarningMessage;
    id <SCUIContainer> _uiContainer;
    id <SCAbuseWarningWorkflowDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *abuseWarningId; // @synthesize abuseWarningId=_abuseWarningId;
@property(readonly, nonatomic) NSString *abuseWarningMessage; // @synthesize abuseWarningMessage=_abuseWarningMessage;
@property(readonly, nonatomic) __weak id <SCAbuseWarningWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithAbuseWarningId:(id)arg1 abuseWarningMessage:(id)arg2 uiContainer:(id)arg3 delegate:(id)arg4;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;

@end

