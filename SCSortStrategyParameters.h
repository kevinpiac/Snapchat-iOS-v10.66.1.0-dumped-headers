//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLens, SCLensByDefaultPolicy;

@interface SCSortStrategyParameters : NSObject
{
    _Bool _showBirthdayReplyLens;
    SCLens *_originalLens;
    SCLens *_selectedLens;
    SCLensByDefaultPolicy *_lensByDefaultPolicy;
}

- (void).cxx_destruct;
- (id)initWithShowBirthdayReplyLens:(_Bool)arg1 originalLens:(id)arg2 selectedLens:(id)arg3 lensByDefaultPolicy:(id)arg4;
@property(readonly, nonatomic) SCLensByDefaultPolicy *lensByDefaultPolicy; // @synthesize lensByDefaultPolicy=_lensByDefaultPolicy;
@property(readonly, nonatomic) SCLens *originalLens; // @synthesize originalLens=_originalLens;
@property(readonly, nonatomic) SCLens *selectedLens; // @synthesize selectedLens=_selectedLens;
@property(readonly, nonatomic) _Bool showBirthdayReplyLens; // @synthesize showBirthdayReplyLens=_showBirthdayReplyLens;

@end
