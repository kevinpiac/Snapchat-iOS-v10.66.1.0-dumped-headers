//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCSortableRecipient;

@interface SCRecipientCompareWrapper : NSObject
{
    id <SCSortableRecipient> _recipient;
    unsigned long long _matchType;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) id <SCSortableRecipient> recipient; // @synthesize recipient=_recipient;

@end

