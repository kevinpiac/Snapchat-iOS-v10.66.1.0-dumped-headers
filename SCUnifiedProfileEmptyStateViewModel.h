//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCSearchActionButtonViewModel;

@interface SCUnifiedProfileEmptyStateViewModel : NSObject <NSCopying>
{
    NSAttributedString *_text;
    SCSearchActionButtonViewModel *_buttonViewModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 buttonViewModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;

@end

