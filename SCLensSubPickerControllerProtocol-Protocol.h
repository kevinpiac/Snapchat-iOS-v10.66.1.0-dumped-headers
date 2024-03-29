//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol SCLensSubPickerControllerProtocol <NSObject>
- (void)hideAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
@property(readonly, nonatomic) UIView *pickerContentView;
- (_Bool)pointInside:(struct CGPoint)arg1 view:(UIView *)arg2;
@property(readonly, nonatomic) NSString *selectedOptionId;
@property(readonly, nonatomic) long long selectedOptionIndex;
- (void)setOptionIdToRestore:(NSString *)arg1;
- (void)showAnimated:(_Bool)arg1;
@end

