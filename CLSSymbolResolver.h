//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CLSSymbolResolver : NSObject
{
    NSMutableArray *_binaryImages;
}

- (void).cxx_destruct;
- (_Bool)fillInImageDetails:(CDStruct_fad71a87 *)arg1 forUUID:(id)arg2;
- (id)frameForAddress:(unsigned long long)arg1;
- (id)init;
- (_Bool)loadBinaryImagesFromFile:(id)arg1;
- (id)loadedBinaryImageForPC:(unsigned long long)arg1;
- (_Bool)updateStackFrame:(id)arg1;

@end

