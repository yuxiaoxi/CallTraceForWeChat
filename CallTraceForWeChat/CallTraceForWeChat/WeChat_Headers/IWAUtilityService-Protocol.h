//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWAUtilityService <NSObject>
+ (id)valueForKey:(NSString *)arg1 config:(NSString *)arg2;
+ (NSString *)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
+ (unsigned int)uintFromDynamicConfigForKey:(NSString *)arg1 defaultValue:(unsigned int)arg2;
+ (NSString *)valueFromDynamicConfigForKey:(NSString *)arg1;
@end
