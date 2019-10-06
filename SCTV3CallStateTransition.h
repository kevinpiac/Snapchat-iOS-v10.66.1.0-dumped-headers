//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCTV3CallStateTransition : NSObject
{
    unsigned long long _from;
    unsigned long long _to;
    long long _reason;
    CDUnknownBlockType _announce;
}

- (void).cxx_destruct;
- (void)announceTransition;
- (id)description;
@property(readonly, nonatomic) unsigned long long from; // @synthesize from=_from;
- (id)initFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 reason:(long long)arg3;
- (id)initFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 reason:(long long)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long to; // @synthesize to=_to;

@end

