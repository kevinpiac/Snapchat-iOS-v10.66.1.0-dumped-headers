//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, UIColor, UIImage;

@interface SCDiscoverFeedInterestSelectionSectionLoadingButtonViewModel : NSObject <NSCopying>
{
    _Bool _showLoadingSpinner;
    _Bool _isDoneButtonImageOnRight;
    UIColor *_loadingSpinnerColor;
    NSAttributedString *_doneButtonText;
    UIImage *_doneButtonImage;
    double _doneButtonImagePadding;
    UIColor *_doneButtonBackgroundColor;
    SCActionModel *_doneButtonTapActionModel;
    struct CGSize _loadingSpinnerSize;
    struct UIEdgeInsets _loadingSpinnerEdgeInsets;
    struct UIEdgeInsets _doneButtonEdgeInsets;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) UIColor *doneButtonBackgroundColor; // @synthesize doneButtonBackgroundColor=_doneButtonBackgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets doneButtonEdgeInsets; // @synthesize doneButtonEdgeInsets=_doneButtonEdgeInsets;
@property(readonly, copy, nonatomic) UIImage *doneButtonImage; // @synthesize doneButtonImage=_doneButtonImage;
@property(readonly, nonatomic) double doneButtonImagePadding; // @synthesize doneButtonImagePadding=_doneButtonImagePadding;
@property(readonly, copy, nonatomic) SCActionModel *doneButtonTapActionModel; // @synthesize doneButtonTapActionModel=_doneButtonTapActionModel;
@property(readonly, copy, nonatomic) NSAttributedString *doneButtonText; // @synthesize doneButtonText=_doneButtonText;
- (unsigned long long)hash;
- (id)initWithLoadingSpinnerSize:(struct CGSize)arg1 loadingSpinnerEdgeInsets:(struct UIEdgeInsets)arg2 loadingSpinnerColor:(id)arg3 showLoadingSpinner:(_Bool)arg4 doneButtonText:(id)arg5 doneButtonImage:(id)arg6 doneButtonEdgeInsets:(struct UIEdgeInsets)arg7 doneButtonImagePadding:(double)arg8 isDoneButtonImageOnRight:(_Bool)arg9 doneButtonBackgroundColor:(id)arg10 doneButtonTapActionModel:(id)arg11;
@property(readonly, nonatomic) _Bool isDoneButtonImageOnRight; // @synthesize isDoneButtonImageOnRight=_isDoneButtonImageOnRight;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) UIColor *loadingSpinnerColor; // @synthesize loadingSpinnerColor=_loadingSpinnerColor;
@property(readonly, nonatomic) struct UIEdgeInsets loadingSpinnerEdgeInsets; // @synthesize loadingSpinnerEdgeInsets=_loadingSpinnerEdgeInsets;
@property(readonly, nonatomic) struct CGSize loadingSpinnerSize; // @synthesize loadingSpinnerSize=_loadingSpinnerSize;
@property(readonly, nonatomic) _Bool showLoadingSpinner; // @synthesize showLoadingSpinner=_showLoadingSpinner;

@end
