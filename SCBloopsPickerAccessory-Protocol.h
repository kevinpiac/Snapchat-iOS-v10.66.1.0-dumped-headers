//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCBloopsPickerViewDelegate-Protocol.h"

@protocol SCBloopsPickerAccessoryOutput, SCBloopsPickerController, SCTalkManager;

@protocol SCBloopsPickerAccessory <SCBloopsPickerViewDelegate>
- (void)enterActiveStateWithPickerController:(id <SCBloopsPickerController>)arg1 talkManager:(id <SCTalkManager>)arg2;
- (void)exitActiveState;
- (_Bool)isBloopsAllowedForAdditionalCategories;
@property(nonatomic) __weak id <SCBloopsPickerAccessoryOutput> output;
- (void)willResumeActive;
- (void)willSuspendActive;
@end

