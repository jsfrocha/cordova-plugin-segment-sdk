#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

@interface SegmentPlugin : CDVPlugin

- (void)identify:(CDVInvokedUrlCommand*)command;
- (void)group:(CDVInvokedUrlCommand*)command;
- (void)track:(CDVInvokedUrlCommand*)command;
- (void)screen:(CDVInvokedUrlCommand*)command;
- (void)alias:(CDVInvokedUrlCommand*)command;
- (void)reset:(CDVInvokedUrlCommand*)command;
- (void)flush:(CDVInvokedUrlCommand*)command;
- (void)enable:(CDVInvokedUrlCommand*)command;
- (void)disable:(CDVInvokedUrlCommand*)command;

@end