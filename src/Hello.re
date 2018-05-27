let component = ReasonReact.statelessComponent("Hello");

/* underscores before names indicate unused variables. We name them for clarity */
let make = (~name, _children) => {
  ...component,
  render: _self => <p> (ReasonReact.string("Hello " ++ name ++ "!")) </p>,
};