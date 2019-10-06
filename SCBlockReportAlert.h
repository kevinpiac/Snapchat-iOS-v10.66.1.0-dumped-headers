//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class Friend, NSArray;
@protocol SCBlockReportAlertDelegate;

@interface SCBlockReportAlert : NSObject
{
    id <SCBlockReportAlertDelegate> _blockReportAlertDelegate;
    Friend *_friendEditing;
    NSArray *_blockReasons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *blockReasons; // @synthesize blockReasons=_blockReasons;
@property(nonatomic) __weak id <SCBlockReportAlertDelegate> blockReportAlertDelegate; // @synthesize blockReportAlertDelegate=_blockReportAlertDelegate;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForUnBlock:(id)arg1;
- (void)didPressBlockOrUnblockButton:(id)arg1;
- (void)didPressBlockOrUnblockButton:(id)arg1 blockTitle:(id)arg2 blockMessage:(id)arg3 blockButton:(id)arg4 cancelButton:(id)arg5;
@property(retain, nonatomic) Friend *friendEditing; // @synthesize friendEditing=_friendEditing;
- (void)handleBlockReasonSelection:(id)arg1 inAlertFlow:(id)arg2;

@end

