[@bs.deriving abstract]
type composableMapProps = {
  height: int,
  width: int
};

[@bs.module "react-simple-maps"]
external composableMap : ReasonReact.reactClass = "ComposableMap";

let make = (~height, ~width, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=composableMap,
    ~props=composableMapProps(~height, ~width),
    children,
  );